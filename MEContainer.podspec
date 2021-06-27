Pod::Spec.new do |s|
  s.name         = 'MEContainer'
  s.version      = '1.0.0'
  s.summary      = '对象容器'
  s.description  = '对象容器'
  s.homepage     = 'https://github.com/mmueeee/MEContainer'
  s.license      = 'MIT'
  s.author       = { 'muee' => 'mmuee88@163.com' }
  s.platform     = :ios, '8.0'
  s.source       = { 
    :git => "https://github.com/mmueeee/MEContainer.git", 
    :tag => s.version.to_s 
  }
  s.requires_arc = true

  s.source_files = '**/*.{h,m}' # 源码文件
end
