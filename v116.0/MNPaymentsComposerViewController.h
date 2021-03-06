/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPaymentsComposerViewDelegate.h>

@protocol FBPaymentsNavigationDelegate;
@class FBMobileConfigContextManager, MNPaymentsComposerTextInputHandler, NSString;

@interface MNPaymentsComposerViewController : UIViewController <MNPaymentsComposerViewDelegate> {

	FBMobileConfigContextManager* _contextManager;
	MNPaymentsComposerTextInputHandler* _textInputHandler;
	NSString* _placeholderText;
	BOOL _shouldUseSeparatorWithInsets;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic) BOOL shouldUseSeparatorWithInsets;                                       //@synthesize shouldUseSeparatorWithInsets=_shouldUseSeparatorWithInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectRichMediaOfType:(unsigned long long)arg1 ;
-(id)composerText;
-(void)_refreshViewModel;
-(BOOL)shouldUseSeparatorWithInsets;
-(id)initWithSession:(id)arg1 placeholderText:(id)arg2 ;
-(void)setShouldUseSeparatorWithInsets:(BOOL)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)viewDidLoad;
-(BOOL)canResignFirstResponder;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setPlaceholderText:(id)arg1 ;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

