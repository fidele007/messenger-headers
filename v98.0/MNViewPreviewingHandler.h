/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNVideoPreviewViewControllerDelegate.h>
#import <Messenger/MNSaveAttachmentListener.h>
#import <Messenger/MNPhotoNodeActionHandlerDelegate.h>
#import <Messenger/MNProfilePreviewViewControllerDelegate.h>
#import <Messenger/MNLinkPreviewViewControllerDelegate.h>
#import <Messenger/MNStickerPreviewViewControllerDelegate.h>
#import <Messenger/MNThreadPreviewViewControllerDelegate.h>
#import <Messenger/MNViewPreviewingHandling.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNViewPreviewingHandlerDelegate;
@class NSString, MNViewPreviewingHandlerInjector, FBLazyCreator;

@interface MNViewPreviewingHandler : NSObject <FBClassInjectable, MNVideoPreviewViewControllerDelegate, MNSaveAttachmentListener, MNPhotoNodeActionHandlerDelegate, MNProfilePreviewViewControllerDelegate, MNLinkPreviewViewControllerDelegate, MNStickerPreviewViewControllerDelegate, MNThreadPreviewViewControllerDelegate, MNViewPreviewingHandling, FBClassProvidable> {

	NSString* _source;
	MNViewPreviewingHandlerInjector* _injector;
	FBLazyCreator* _stickerResourceManagerCreator;
	FBLazyCreator* _stickerManagerCreator;
	id<MNViewPreviewingHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNViewPreviewingHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)configureWithSource:(id)arg1 ;
-(void)attachmentDidSave:(unsigned long long)arg1 ;
-(void)attachmentSaveDidFailWithError:(id)arg1 attachmentType:(unsigned long long)arg2 ;
-(void)photoNodeActionHandlerWillOpenNode:(id)arg1 ;
-(void)linkPreviewViewController:(id)arg1 didSelectForwardWithURL:(id)arg2 ;
-(id)_photoPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_videoPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_stickerPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_profilePreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_linkPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_addressPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_threadPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_montagePreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(void)videoPreviewViewController:(id)arg1 willCommitWithData:(id)arg2 ;
-(void)videoPreviewViewController:(id)arg1 didSelectForwardWithMessage:(id)arg2 ;
-(void)videoPreviewViewController:(id)arg1 didSelectSaveWithMessage:(id)arg2 ;
-(BOOL)videoPreviewViewController:(id)arg1 canForwardWithMessage:(id)arg2 ;
-(void)photoNodeActionHandlerDidSelectForward:(id)arg1 ;
-(void)photoNodeActionHandlerDidSelectSave:(id)arg1 ;
-(void)profilePreviewViewController:(id)arg1 didSelectForwardWithURL:(id)arg2 ;
-(void)stickerPreviewViewController:(id)arg1 didSelectForwardWithMessage:(id)arg2 ;
-(void)threadPreviewViewController:(id)arg1 viewWillBeginPreviewingWithData:(id)arg2 ;
-(void)threadPreviewViewController:(id)arg1 viewDidEndPreviewingWithData:(id)arg2 ;
-(void)contactDetailsAtThreadKey:(id)arg1 ;
-(void)setDelegate:(id<MNViewPreviewingHandlerDelegate>)arg1 ;
-(id<MNViewPreviewingHandlerDelegate>)delegate;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end
