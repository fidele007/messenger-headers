/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(NSArray *)quickReplies;
-(void)composeQuickReplyView:(id)arg1 didSelectQuickReply:(id)arg2 ;
-(void)setShowsLoading:(BOOL)arg1 ;
-(BOOL)showsLoading;
-(MNComposeQuickReplyView *)quickReplyView;
-(void)setQuickReplyView:(MNComposeQuickReplyView *)arg1 ;
-(void)setDelegate:(id<MNComposeQuickReplyViewControllerDelegate>)arg1 ;
-(id<MNComposeQuickReplyViewControllerDelegate>)delegate;
-(void)loadView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
@end

