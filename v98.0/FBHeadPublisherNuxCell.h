/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBHeadPublisherNuxTableViewCellDelegate;
@class FBRichTextView, UIButton, NSAttributedString;

@interface FBHeadPublisherNuxCell : UIView {

	FBRichTextView* _richTextView;
	UIButton* _dismissButton;
	id<FBHeadPublisherNuxTableViewCellDelegate> _delegate;

}

@property (nonatomic,copy) NSAttributedString * nuxText; 
@property (assign,nonatomic) id<FBHeadPublisherNuxTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForText:(id)arg1 width:(double)arg2 ;
+(id)backgroundColor;
-(void)_didTapDismissButton:(id)arg1 ;
-(void)setNuxText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)nuxText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBHeadPublisherNuxTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBHeadPublisherNuxTableViewCellDelegate>)delegate;
@end

