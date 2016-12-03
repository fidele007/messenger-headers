/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCRecentListViewController.h>
#import <Messenger/FBClassProvidable.h>

@class NSString;

@interface FBWebRTCRecentCallsViewController : FBWebRTCRecentListViewController <FBClassProvidable> {

	long long _preferredRowToScroll;

}

@property (assign,nonatomic) long long preferredRowToScroll;              //@synthesize preferredRowToScroll=_preferredRowToScroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithCallLogViewModel:(id)arg1 detailViewControllerProvider:(id)arg2 avatarImageDecoration:(id)arg3 dateFormatter:(id)arg4 callButtonImageProvider:(id)arg5 presenceSubscriptionService:(id)arg6 experimentManager:(id)arg7 audioCache:(id)arg8 webAudioManager:(id)arg9 configManager:(id)arg10 viewPreviewingHandler:(id)arg11 profileImageViewController:(id)arg12 threadImageManager:(id)arg13 ;
-(void)updateControls;
-(void)setPreferredRowToScroll:(long long)arg1 ;
-(void)_scrollToPreferredPosition;
-(long long)preferredRowToScroll;
-(void)viewDidLoad;
@end
