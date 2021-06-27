//
//  MEServiceManager.h
//  Pods
//
//  Created by ylin on 2021/6/27.
//
// 代码参考 https://github.com/alibaba/BeeHive/blob/master/BeeHive/BHServiceManager.m

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MEServiceManager : NSObject

@property (nonatomic, assign) BOOL  enableException;

+ (instancetype)shared;

- (void)registerLocalServices;

- (void)registerService:(Protocol *)service implClass:(Class)implClass;

- (id)createService:(Protocol *)service;
- (id)createService:(Protocol *)service withServiceName:(NSString *)serviceName;

- (id)getServiceInstanceFromServiceName:(NSString *)serviceName;
- (void)removeServiceWithServiceName:(NSString *)serviceName;

@end

NS_ASSUME_NONNULL_END
