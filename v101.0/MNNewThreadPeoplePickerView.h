/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPeoplePickerView.h>

@protocol MNNewThreadPeoplePickerViewDelegate;
@class UIView, MNTouchBeganGestureRecognizer;

@interface MNNewThreadPeoplePickerView : MNPeoplePickerView {

	UIView* _suggestionsOverlayView;
	MNTouchBeganGestureRecognizer* _dismissalRecognizer;
	id<MNNewThreadPeoplePickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNNewThreadPeoplePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL graysOutSuggestions; 
-(void)_didDismissSuggetsionsOverlay;
-(BOOL)graysOutSuggestions;
-(void)setGraysOutSuggestions:(BOOL)arg1 ;
-(void)setGraysOutSuggestions:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNNewThreadPeoplePickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNNewThreadPeoplePickerViewDelegate>)delegate;
@end

