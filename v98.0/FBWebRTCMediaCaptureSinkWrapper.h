/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebRTCMediaCaptureSink.h>

@class NSString;

@interface FBWebRTCMediaCaptureSinkWrapper : NSObject <FBWebRTCMediaCaptureSink> {

	weak_ptr<facebook::rtc::MediaCaptureSink>* _weakSink;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)onCapturedFrame:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithNativeSink:(weak_ptr<facebook::rtc::MediaCaptureSink>*)arg1 ;
-(BOOL)isValid;
@end
