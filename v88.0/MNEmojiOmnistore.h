/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNOmnistoreUserPrefsDeltaListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class MNOmnistoreUserPrefsStore, NSString;

@interface MNEmojiOmnistore : NSObject <MNOmnistoreUserPrefsDeltaListener, FBViewerContextClassProvidable> {

	MNOmnistoreUserPrefsStore* _omnistoreUserPrefsStore;

}

@property (assign,getter=isFeatureDisabled,nonatomic) BOOL featureDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)resetNuxShownTime;
-(void)setFeatureDisabled:(BOOL)arg1 ;
-(BOOL)isFeatureDisabled;
-(long long)nuxShownTime;
-(void)increaseNuxShownTime;
-(long long)emojiFitzpatrickType;
-(void)setEmojiFitzpatrickType:(long long)arg1 ;
-(id)initWithOmnistorePrefsStore:(id)arg1 ;
-(void)didReceiveUserPrefsDeltas:(id)arg1 ;
@end

