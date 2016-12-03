/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBQuickPromotionLayoutInfo : NSObject {

	NSString* _titleTruncated;
	NSString* _subtitleTruncated;
	NSString* _primaryButtonTruncated;
	NSString* _secondaryButtonTruncated;
	NSString* _socialContextTruncated;

}

@property (nonatomic,copy) NSString * titleTruncated;                        //@synthesize titleTruncated=_titleTruncated - In the implementation block
@property (nonatomic,copy) NSString * subtitleTruncated;                     //@synthesize subtitleTruncated=_subtitleTruncated - In the implementation block
@property (nonatomic,copy) NSString * primaryButtonTruncated;                //@synthesize primaryButtonTruncated=_primaryButtonTruncated - In the implementation block
@property (nonatomic,copy) NSString * secondaryButtonTruncated;              //@synthesize secondaryButtonTruncated=_secondaryButtonTruncated - In the implementation block
@property (nonatomic,copy) NSString * socialContextTruncated;                //@synthesize socialContextTruncated=_socialContextTruncated - In the implementation block
@property (nonatomic,readonly) BOOL hasTruncatedField; 
+(void)logIfTextIsTruncatedForPromotion:(id)arg1 interstitialView:(id)arg2 ;
+(id)layoutInfoWithTitleTextView:(id)arg1 subtitleTextView:(id)arg2 primaryButtonTextView:(id)arg3 secondaryButtonTextView:(id)arg4 socialContextTextView:(id)arg5 ;
+(id)_textIfTruncatedTextView:(id)arg1 ;
+(id)layoutInfoWithInterstitialView:(id)arg1 ;
+(void)_logIfTextIsTruncatedForPromotion:(id)arg1 layoutInfo:(id)arg2 ;
+(void)logIfTextIsTruncatedForPromotion:(id)arg1 titleTextView:(id)arg2 subtitleTextView:(id)arg3 primaryButtonTextView:(id)arg4 secondaryButtonTextView:(id)arg5 socialContextTextView:(id)arg6 ;
-(void)setTitleTruncated:(NSString *)arg1 ;
-(void)setSubtitleTruncated:(NSString *)arg1 ;
-(void)setPrimaryButtonTruncated:(NSString *)arg1 ;
-(void)setSecondaryButtonTruncated:(NSString *)arg1 ;
-(void)setSocialContextTruncated:(NSString *)arg1 ;
-(BOOL)hasTruncatedField;
-(id)dictionaryForLogging;
-(NSString *)titleTruncated;
-(NSString *)subtitleTruncated;
-(NSString *)primaryButtonTruncated;
-(NSString *)secondaryButtonTruncated;
-(NSString *)socialContextTruncated;
@end

