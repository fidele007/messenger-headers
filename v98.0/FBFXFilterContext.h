/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class EAGLContext;

@interface FBFXFilterContext : NSObject {

	EAGLContext* _glContext;

}
+(void)performanceTest;
+(void)applicationDidBecomeActive:(id)arg1 ;
+(void)applicationWillResignActive:(id)arg1 ;
+(void)initialize;
+(void)apply:(/*^block*/id)arg1 ;
-(void)blurWithTargetSize:(CGSize)arg1 apply:(/*^block*/id)arg2 ;
@end

