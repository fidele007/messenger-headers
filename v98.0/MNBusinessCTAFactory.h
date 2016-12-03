/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBUserSession, NSString;

@interface MNBusinessCTAFactory : NSObject <FBViewerContextClassProvidable> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)buttonViewModelFromFBMCallToAction:(id)arg1 actionTargets:(id)arg2 style:(long long)arg3 titleFont:(id)arg4 titleColor:(id)arg5 titleAdjustsFontSizeToFitWidth:(BOOL)arg6 titleMinimumScaleFactor:(double)arg7 buttonColor:(id)arg8 roundedCornerRadius:(double)arg9 height:(double)arg10 isFullBleed:(BOOL)arg11 loggingData:(id)arg12 invalidatePageInfoOnClick:(BOOL)arg13 pageID:(id)arg14 pageName:(id)arg15 threadID:(id)arg16 ;
-(id)buttonViewModelFromFBMemMessengerCallToAction:(id)arg1 targetFbID:(id)arg2 senderID:(id)arg3 messageID:(id)arg4 style:(long long)arg5 titleColor:(id)arg6 loggingData:(id)arg7 invalidatePageInfoOnClick:(BOOL)arg8 pageID:(id)arg9 threadID:(id)arg10 contentHorizontalAlignment:(long long)arg11 ;
-(id)buttonActionFromFBMemMessengerCallToAction:(id)arg1 displayHeightRatioForActionUrl:(double)arg2 invalidatePageInfoOnClick:(BOOL)arg3 pageID:(id)arg4 threadID:(id)arg5 ;
-(id)_buttonViewModelFromGraphQLID:(id)arg1 actionTitle:(id)arg2 actionURLString:(id)arg3 nativeURLString:(id)arg4 actionOpenType:(id)arg5 displayHeightRatioForActionUrl:(double)arg6 isMutable:(BOOL)arg7 actionTargets:(id)arg8 style:(long long)arg9 titleFont:(id)arg10 titleColor:(id)arg11 titleAdjustsFontSizeToFitWidth:(BOOL)arg12 titleMinimumScaleFactor:(double)arg13 buttonColor:(id)arg14 roundedCornerRadius:(double)arg15 disabled:(BOOL)arg16 height:(double)arg17 isFullBleed:(BOOL)arg18 loggingData:(id)arg19 invalidatePageInfoOnClick:(BOOL)arg20 pageID:(id)arg21 pageName:(id)arg22 confirmation:(id)arg23 threadID:(id)arg24 paymentModuleConfiguration:(id)arg25 contentHorizontalAlignment:(long long)arg26 ;
-(id)_buttonActionFromGraphQLID:(id)arg1 actionTitle:(id)arg2 actionURLString:(id)arg3 nativeURLString:(id)arg4 actionOpenType:(id)arg5 displayHeightRatioForActionUrl:(double)arg6 isMutable:(BOOL)arg7 actionTargets:(id)arg8 invalidatePageInfoOnClick:(BOOL)arg9 pageID:(id)arg10 pageName:(id)arg11 threadID:(id)arg12 paymentModuleConfiguration:(id)arg13 ;
@end

