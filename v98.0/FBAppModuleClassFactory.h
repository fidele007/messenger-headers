/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAppModuleFactory.h>

@class NSString;

@interface FBAppModuleClassFactory : NSObject <FBAppModuleFactory> {

	Class _moduleClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)moduleName;
-(id)moduleForSession:(id)arg1 providerMap:(id)arg2 ;
-(BOOL)moduleNeedsInstance;
-(Class)moduleClass;
-(id)initWithModuleClass:(Class)arg1 ;
@end

