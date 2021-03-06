/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAnalytics, NSDate, NSString, NSArray, NSMutableArray;

@interface FBWebRedirectTracker : NSObject {

	BOOL _isAds;
	FBAnalytics* _analytics;
	NSDate* _startDate;
	NSString* _originalUrl;
	NSArray* _trackingCodes;
	NSMutableArray* _redirectChain;
	BOOL _recording;

}

@property (getter=isRecording,nonatomic,readonly) BOOL recording;              //@synthesize recording=_recording - In the implementation block
-(id)_normalizeHost:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 userSession:(id)arg2 trackingCodes:(id)arg3 isAds:(BOOL)arg4 ;
-(void)recordURL:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(BOOL)isRecording;
-(void)stopRecording;
@end

