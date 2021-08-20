//
//  ORTestReplaceClass.h
//  OCRunnerTests
//
//  Created by Jiang on 2020/5/14.
//  Copyright © 2020 SilverFruity. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ORTestReplaceClass : NSObject
- (int)test;
- (int)arg1:(NSNumber *)arg1;
- (int)arg1:(NSNumber *)arg1 arg2:(NSNumber *)arg2;
- (void *)valueAdress;
+ (BOOL)testClassMethodReplaceTest;
- (NSInteger)testOriginalMethod;
- (NSInteger)testAddGlobalVar;
- (NSDictionary *(^)(void))testMethodParameterListAndReturnValueWithString:(NSString *)str block:(NSString *(^)(NSString *))block;
- (int)testNoSignatureBlock:(int(^)(int))arg;
- (NSString *)testInputStackBlock;
- (void)receiveStackBlock:(void (^)(NSString *str))block;

- (void)test6ArgsMethoCall:(int)arg1 arg2:(int)arg2  arg3:(int)arg3 arg4:(int)arg4 arg5:(int)arg5 arg6:(int)arg6;
- (int)scriptReceiveCArray:(int *)array len:(int)len;
- (int)receiveCArray:(int *)array len:(int)len;

@end

NS_ASSUME_NONNULL_END
