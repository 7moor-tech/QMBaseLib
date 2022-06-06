

Pod::Spec.new do |spec|


  spec.name         = "QMBaseLib"
  spec.version      = "0.2"
  spec.summary      = "QMBaseLib is sdk"

  spec.homepage     = "https://github.com/7moor-tech/QMBaseLib"

  spec.license      = "MIT"

  spec.author       = { "RockALins" => "rockcodealin@163.com" }

  spec.platform     = :ios,'9.0'

  spec.source       = { :git => "https://github.com/7moor-tech/QMBaseLib.git", :tag => spec.version.to_s }

  spec.vendored_frameworks  = "QMBaseLib.framework"
  spec.pod_target_xcconfig = {'VALID_ARCHS'=>'armv7 x86_64 arm64'}

  spec.requires_arc = true
  spec.dependency 'Qiniu'
  spec.dependency 'FMDB', '~> 2.7.5'
  spec.dependency 'ZhugeioAnalytics'

end
