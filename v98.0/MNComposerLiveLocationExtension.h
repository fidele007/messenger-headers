/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMessageLiveLocationTrayViewControllerDelegate.h>

@class MNComposerLiveLocationExtensionInjector, MNMessageLiveLocationTrayViewController, MNMessageLiveLocationAnalyticsLogger, NSString;

@interface MNComposerLiveLocationExtension : MNAbstractComposerTrayExtension <FBClassInjectable, MNMessageLiveLocationTrayViewControllerDelegate> {

	MNComposerLiveLocationExtensionInjector* _injector;
	MNMessageLiveLocationTrayViewController* _trayViewController;
	MNMessageLiveLocationAnalyticsLogger* _analyticsLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(id)_threadKey;
-(id)_composerIcon;
-(id)extensionModule;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)isEligible;
-(id)viewControllerForPresentation;
-(id)messageLocationTrayViewControllerCurrentThreadKey:(id)arg1 ;
-(id)messageLocationTrayViewController:(id)arg1 didTapToSendWithLiveLocationDataToSend:(id)arg2 ;
-(void)messageLocationTrayViewController:(id)arg1 didTapSendWithStaticLocationAttachmentData:(id)arg2 ;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
@end

