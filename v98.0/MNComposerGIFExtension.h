/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNMediaCollectionViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNPlatformAppActionFactory;
@class MNMediaCollectionViewController, FBUserSession, FBMobileConfigContextManager, MNPhotoViewImageDownloadController, MNPlatformAppActionHandler, FBLazyCreator, NSString;

@interface MNComposerGIFExtension : MNAbstractComposerTrayExtension <MNMediaCollectionViewControllerDelegate, FBClassProvidable> {

	MNMediaCollectionViewController* _gifViewController;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNPhotoViewImageDownloadController* _photoDownloadController;
	id<FBProvider> _iconControllerProvider;
	id<MNPlatformAppActionFactory> _platformAppActionFactory;
	MNPlatformAppActionHandler* _platformAppActionHandler;
	FBLazyCreator* _composerIconCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_composerIcon;
-(id)extensionModule;
-(void)didSelect:(BOOL)arg1 ;
-(BOOL)shouldPresent:(BOOL)arg1 ;
-(id)viewControllerForPresentation;
-(id)initWithPhotoDownloadController:(id)arg1 session:(id)arg2 iconControllerProvider:(id)arg3 platformAppActionFactory:(id)arg4 platformAppActionHandler:(id)arg5 configManager:(id)arg6 composerIconProvider:(id)arg7 ;
-(void)_initGIFViewControllerIfNecessary;
-(void)mediaCollectionViewController:(id)arg1 didSelectContent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)mediaCollectionViewControllerDidDeselectContent:(id)arg1 ;
-(void)mediaCollectionViewControllerDidChangePreferredSize:(id)arg1 ;
-(void)mediaCollectionViewController:(id)arg1 didSelectPlatformApplication:(id)arg2 ;
-(void)mediaCollectionViewController:(id)arg1 didLoadNumberOfContents:(unsigned long long)arg2 ;
-(void)mediaCollectionViewController:(id)arg1 didLoadMediaAppID:(id)arg2 numberOfBytes:(unsigned long long)arg3 elapsedTime:(double)arg4 ;
-(id)extensionIdentifier;
-(long long)category;
-(id)tabBarItem;
@end

