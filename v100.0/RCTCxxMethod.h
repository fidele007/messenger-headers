/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTBridgeMethod.h>

@class NSString;

@interface RCTCxxMethod : NSObject <RCTBridgeMethod> {

	unique_ptr<facebook::xplat::module::CxxModule::Method, std::__1::default_delete<facebook::xplat::module::CxxModule::Method> >* _method;
	NSString* _JSMethodName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * JSMethodName;                 //@synthesize JSMethodName=_JSMethodName - In the implementation block
@property (nonatomic,readonly) unsigned long long functionType; 
-(NSString *)JSMethodName;
-(id)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3 ;
-(id)initWithCxxMethod:(const Method*)arg1 ;
-(unsigned long long)functionType;
-(NSString *)description;
@end

