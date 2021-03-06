/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZRFenceBase.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString, UIAlertView, ZRApplicationState, FBPreferences, UIApplication;

@interface ZRDialogFence : ZRFenceBase <UIAlertViewDelegate> {

	NSString* _preferenceKey;
	UIAlertView* _alertView;
	NSString* _title;
	NSString* _message;
	NSString* _continueText;
	NSString* _continueDontAskText;
	NSString* _uiFeature;
	ZRApplicationState* _zeroRatingState;
	FBPreferences* _zeroRatingPreferences;
	UIApplication* _application;

}

@property (nonatomic,copy) NSString * preferenceKey;                             //@synthesize preferenceKey=_preferenceKey - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                            //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * continueText;                              //@synthesize continueText=_continueText - In the implementation block
@property (nonatomic,copy) NSString * continueDontAskText;                       //@synthesize continueDontAskText=_continueDontAskText - In the implementation block
@property (nonatomic,copy) NSString * uiFeature;                                 //@synthesize uiFeature=_uiFeature - In the implementation block
@property (nonatomic,retain) ZRApplicationState * zeroRatingState;               //@synthesize zeroRatingState=_zeroRatingState - In the implementation block
@property (nonatomic,retain) FBPreferences * zeroRatingPreferences;              //@synthesize zeroRatingPreferences=_zeroRatingPreferences - In the implementation block
@property (nonatomic,retain) UIApplication * application;                        //@synthesize application=_application - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialogFenceForPrefKey:(id)arg1 andSession:(id)arg2 ;
-(ZRApplicationState *)zeroRatingState;
-(void)setZeroRatingState:(ZRApplicationState *)arg1 ;
-(void)setPreferenceKey:(NSString *)arg1 ;
-(void)setContinueText:(NSString *)arg1 ;
-(void)setContinueDontAskText:(NSString *)arg1 ;
-(id)uiFeatureFromPrefKey:(id)arg1 ;
-(void)setUiFeature:(NSString *)arg1 ;
-(void)setZeroRatingPreferences:(FBPreferences *)arg1 ;
-(id)initWithLoggedInUserId:(id)arg1 preferenceKey:(id)arg2 title:(id)arg3 message:(id)arg4 continueText:(id)arg5 continueDontAskText:(id)arg6 zeroRatingState:(id)arg7 application:(id)arg8 session:(id)arg9 ;
-(BOOL)willImmediatelyCompleteSuccessfully;
-(void)dismissAlertView;
-(NSString *)preferenceKey;
-(NSString *)continueText;
-(NSString *)continueDontAskText;
-(NSString *)uiFeature;
-(FBPreferences *)zeroRatingPreferences;
-(void)show;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIApplication *)application;
-(void)setApplication:(UIApplication *)arg1 ;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
@end

