/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCLogger.h>

@class NSCalendar, NSString;

@interface FBWebRTCRageShakeLogger : NSObject <FBWebRTCLogger> {

	NSCalendar* _calendar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getLog;
-(void)logMessage:(id)arg1 inContext:(id)arg2 ;
-(id)_loggingCalendar;
-(id)init;
@end
