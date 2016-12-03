/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTBridgeMethod.h>

@class NSString, NSInvocation, NSArray;

@interface RCTModuleMethod : NSObject <RCTBridgeMethod> {

	Class _moduleClass;
	NSInvocation* _invocation;
	NSArray* _argumentBlocks;
	NSString* _methodSignature;
	SEL _selector;
	NSString* _JSMethodName;

}

@property (nonatomic,readonly) Class moduleClass;                            //@synthesize moduleClass=_moduleClass - In the implementation block
@property (nonatomic,readonly) SEL selector; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * JSMethodName;                 //@synthesize JSMethodName=_JSMethodName - In the implementation block
@property (nonatomic,readonly) unsigned long long functionType; 
-(Class)moduleClass;
-(id)methodName;
-(id)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3 ;
-(NSString *)JSMethodName;
-(id)initWithMethodSignature:(id)arg1 JSMethodName:(id)arg2 moduleClass:(Class)arg3 ;
-(void)processMethodSignature;
-(unsigned long long)functionType;
-(id)init;
-(NSString *)description;
-(SEL)selector;
@end
