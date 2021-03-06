/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNComposeQuickReplyViewDelegate.h>

@protocol MNComposeQuickReplyViewControllerDelegate;
@class NSArray, UIColor, MNComposeQuickReplyView, NSString;

@interface MNComposeQuickReplyViewController : UIViewController <MNComposeQuickReplyViewDelegate> {

	NSArray* _quickReplies;
	id<MNComposeQuickReplyViewControllerDelegate> _delegate;
	UIColor* _tintColor;
	MNComposeQuickReplyView* _quickReplyView;

}

@property (nonatomic,retain) MNComposeQuickReplyView * quickReplyView;                                   //@synthesize quickReplyView=_quickReplyView - In the implementation block
@property (assign,nonatomic,__weak) id<MNComposeQuickReplyViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * quickReplies;                                                       //@synthesize quickReplies=_quickReplies - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                        //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) BOOL showsLoading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQuickReplies:(NSArray *)arg1 ;
-(void)composeQuickReplyView:(id)arg1 didSelectQuickReply:(id)arg2 ;
-(BOOL)showsLoading;
-(MNComposeQuickReplyView *)quickReplyView;
-(void)setQuickReplyView:(MNComposeQuickReplyView *)arg1 ;
-(void)setShowsLoading:(BOOL)arg1 ;
-(NSArray *)quickReplies;
-(void)setDelegate:(id<MNComposeQuickReplyViewControllerDelegate>)arg1 ;
-(id<MNComposeQuickReplyViewControllerDelegate>)delegate;
-(void)loadView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
@end

