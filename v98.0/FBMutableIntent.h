/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntent.h>

@class FBIntentTarget, FBIntentSource, FBAnalyticsInfo;

@interface FBMutableIntent : FBIntent

@property (nonatomic,retain) FBIntentTarget * target; 
@property (nonatomic,retain) FBIntentSource * source; 
@property (nonatomic,retain) FBAnalyticsInfo * analyticsInfo; 
+(id)intent;
-(void)setAnalyticsInfo:(FBAnalyticsInfo *)arg1 ;
-(FBAnalyticsInfo *)analyticsInfo;
-(void)setTarget:(FBIntentTarget *)arg1 ;
-(void)setSource:(FBIntentSource *)arg1 ;
-(FBIntentSource *)source;
-(FBIntentTarget *)target;
@end

