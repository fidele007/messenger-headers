/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerDeferredView.h>
#import <Messenger/MNComposerTextViewConfiguring.h>

@protocol FBMGrowingTextViewDelegate;
@class NSAttributedString, NSString, FBMGrowingTextView, NSNumber;

@interface MNComposerDeferredTextView : NSObject <MNComposerDeferredView, MNComposerTextViewConfiguring> {

	/*^block*/id _materializationBlock;
	NSAttributedString* _attributedText;
	id<FBMGrowingTextViewDelegate> _delegate;
	NSNumber* _maxNumberOfLines;
	NSString* _placeholderText;
	FBMGrowingTextView* _growingTextView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic,__weak) id<FBMGrowingTextViewDelegate> delegate; 
@property (assign,nonatomic) unsigned long long maxNumberOfLines; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) FBMGrowingTextView * growingTextView;                      //@synthesize growingTextView=_growingTextView - In the implementation block
-(FBMGrowingTextView *)growingTextView;
-(void)setMaxNumberOfLines:(unsigned long long)arg1 ;
-(unsigned long long)maxNumberOfLines;
-(id)initWithMaterializationBlock:(/*^block*/id)arg1 ;
-(void)dematerialize;
-(void)materialize;
-(void)setDelegate:(id<FBMGrowingTextViewDelegate>)arg1 ;
-(id<FBMGrowingTextViewDelegate>)delegate;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
@end

