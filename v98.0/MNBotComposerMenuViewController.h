/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNBusinessBottomSheetViewDelegate.h>
#import <Messenger/MNBusinessButtonViewDelegate.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol MNModalPresentation, MNBusinessCTAHandling, MNActionSheetPresentationDelegate, MNBotComposerMenuViewControllerDelegate;
@class FBUserSession, MNBotComposerMenuViewModel, UITableView, NSString;

@interface MNBotComposerMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNBusinessBottomSheetViewDelegate, MNBusinessButtonViewDelegate, MNActionSheetPresenting> {

	FBUserSession* _session;
	id<MNModalPresentation> _modalPresenter;
	MNBotComposerMenuViewModel* _menuViewModel;
	UITableView* _menuTableView;
	id<MNBusinessCTAHandling> _ctaHandler;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;
	id<MNBotComposerMenuViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBotComposerMenuViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(void)buttonViewWasClicked:(id)arg1 ;
-(id)initWithSession:(id)arg1 modalPresenter:(id)arg2 menuViewModel:(id)arg3 ctaHandler:(id)arg4 ;
-(id)_typeAMessageCellIndexPath;
-(void)_didTapOnTypeAMessageCell;
-(void)_didTapOnButtonView:(id)arg1 ;
-(void)_logDidTapOnMenuItem:(id)arg1 ;
-(void)businessBottomSheetViewDidTapCloseButton:(id)arg1 ;
-(void)setDelegate:(id<MNBotComposerMenuViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNBotComposerMenuViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end

