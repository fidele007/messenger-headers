/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@protocol MNPollDetailViewTableHeaderDelegate;
@class FBRichTextView, UITextField, UIView, NSString;

@interface MNPollDetailViewTableHeader : UITableViewHeaderFooterView {

	FBRichTextView* _questionTextView;
	UITextField* _textField;
	UIView* _separatorView;
	long long _viewState;
	NSString* _questionText;
	id<MNPollDetailViewTableHeaderDelegate> _delegate;

}

@property (nonatomic,copy) NSString * questionText;                                                //@synthesize questionText=_questionText - In the implementation block
@property (assign,nonatomic,__weak) id<MNPollDetailViewTableHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightThatFitsWithMaxSize:(CGSize)arg1 questionText:(id)arg2 viewState:(long long)arg3 ;
-(void)setQuestionText:(NSString *)arg1 ;
-(NSString *)questionText;
-(void)setViewState:(long long)arg1 ;
-(void)setDelegate:(id<MNPollDetailViewTableHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNPollDetailViewTableHeaderDelegate>)delegate;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)_textFieldDidChange:(id)arg1 ;
@end

