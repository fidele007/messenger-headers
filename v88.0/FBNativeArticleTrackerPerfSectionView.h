/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>
#import <Messenger/FBAnimatedProgressBarViewDelegate.h>

@protocol FBNativeArticleTrackerPerfSectionViewDelegate;
@class UIButton, FBAnimatedProgressBarView, NSString;

@interface FBNativeArticleTrackerPerfSectionView : UITableViewHeaderFooterView <FBAnimatedProgressBarViewDelegate> {

	UIButton* _infoButton;
	FBAnimatedProgressBarView* _progressBar;
	double _buttonWidth;
	double _textToButtonPadding;
	id<FBNativeArticleTrackerPerfSectionViewDelegate> _delegate;
	unsigned long long _status;
	double _progress;

}

@property (assign,nonatomic,__weak) id<FBNativeArticleTrackerPerfSectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                                      //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double progress;                                                                //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tappedButton:(id)arg1 ;
-(void)progressBar:(id)arg1 animatedTo:(double)arg2 ;
-(void)setDelegate:(id<FBNativeArticleTrackerPerfSectionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBNativeArticleTrackerPerfSectionViewDelegate>)delegate;
-(void)setProgress:(double)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(double)progress;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end

