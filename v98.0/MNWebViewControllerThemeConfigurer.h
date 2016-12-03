/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesViewThemeUpdateListening.h>

@class MNMessagesViewThemeUpdateListeningAnnouncer, MNNavigationCoordinator, FBUserSession, UIColor, MNAppThemeConfiguration, NSString;

@interface MNWebViewControllerThemeConfigurer : NSObject <FBViewerContextClassProvidable, MNMessagesViewThemeUpdateListening> {

	MNMessagesViewThemeUpdateListeningAnnouncer* _themeUpdateAnnouncer;
	MNNavigationCoordinator* _navigationCoordinator;
	FBUserSession* _session;
	UIColor* _defaultThemeColor;
	UIColor* _customThemeColor;
	MNAppThemeConfiguration* _appThemeConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)messagesViewThemeDidUpdateThemeColor:(id)arg1 customLikeEmoji:(id)arg2 ;
-(id)initWithThemeUpdateListeningAnnouncer:(id)arg1 navigationCoordinator:(id)arg2 session:(id)arg3 appThemeConfiguration:(id)arg4 ;
-(BOOL)_shouldCustomize;
-(BOOL)_isViewingThread;
-(void)configureWebViewController:(id)arg1 ;
@end

