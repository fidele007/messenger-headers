/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTEventEmitter.h>

@class NSString;

@interface RCTAppState : RCTEventEmitter {

	NSString* _lastKnownState;

}
+(id)moduleName;
+(id)__rct_export__1180;
+(void)load;
-(id)constantsToExport;
-(id)methodQueue;
-(id)supportedEvents;
-(void)handleAppStateDidChange:(id)arg1 ;
-(void)getCurrentAppState:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
-(void)handleMemoryWarning;
@end

