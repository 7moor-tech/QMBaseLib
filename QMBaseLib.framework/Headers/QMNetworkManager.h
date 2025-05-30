//
//  QMNetworkManager.h
//  QMLineSDK
//
//  Created by haochongfeng on 2018/10/24.
//  Copyright © 2018年 haochongfeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QMNetworkSerialization.h"

@interface QMNetworkManager : NSObject

@property (nonatomic, copy) NSURL * _Nullable baseURL;

@property (nonatomic, assign) BOOL isV7HTTP;

@property (nonatomic, strong) QMNetworkRequestSerializer * _Nullable requestSerialzer;

@property (nonatomic, strong) QMNetworkResponseSerializer * _Nullable responseSerialzer;

+ (instancetype _Nullable )networkManger:(nullable NSURL *)url;
/**
 实例化方法

 @param url 网络请求地址
 @return 返回实例化对象
 */
//- (instancetype _Nullable )initWithBaseURL:(nullable NSURL *)url;

/**
 创建一个POST请求

 @param URLString 路由路径
 @param parameters 请求参数
 @param success 请求成功回调
 @param failure 请求失败回调
 @return 返回请求任务实例
 */
- (nullable NSURLSessionDataTask *)POST:(NSString *_Nullable)URLString
                             parameters:(nullable id)parameters
                                success:(nullable void(^)(NSURLSessionDataTask * _Nullable task, id _Nullable responseObject))success
                                failure:(nullable void(^)(NSURLSessionDataTask * _Nullable task, NSError * _Nullable error))failure;

/**
 创建一个GET请求

 @param URLString 路由路径
 @param parameters 请求参数
 @param progress 数据下载进度
 @param success 请求成功回调
 @param failure 请求失败回调
 @return 返回请求任务实例
 */
- (nullable NSURLSessionDownloadTask *)GET:(NSString *_Nullable)URLString
                            parameters:(nullable id)parameters
                                  progress:(nullable void (^)(NSProgress * _Nullable downloadProgress))progress
                               success:(nullable void(^)(NSURLSessionDownloadTask *_Nullable task, id _Nullable responseObject))success
                               failure:(nullable void(^)(NSURLSessionDownloadTask * _Nullable task, NSError *_Nullable error))failure;

/**
 创建一个PUT请求

 @param URLString 路由路径
 @param parameters 请求参数
 @param success 请求成功回调
 @param failure 请求失败回调
 */
- (void)putRequestWithUrlString:(NSString *_Nullable)URLString parameters:(nullable id)parameters progress:(nullable void (^)(float))progress success:(nullable void(^)(id _Nullable responseObject))success failure:(nullable void(^)(NSError * _Nullable error))failure;

@end
