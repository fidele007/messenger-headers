/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SPTopBar.h>

@protocol FBMediaGalleryTopBarDelegate;
@class UILabel, UIButton, FBMediaPickerSession;

@interface FBMediaGalleryTopBar : SPTopBar {

	UILabel* _titleLabel;
	UIButton* _backButton;
	UIButton* _selectButton;
	BOOL _miniBackButton;
	double _topLayoutGuideLength;
	id<FBMediaGalleryTopBarDelegate> _delegate;
	unsigned long long _selectionTitleValue;
	unsigned long long _backButtonStyle;
	FBMediaPickerSession* _session;

}

@property (nonatomic,retain) FBMediaPickerSession * session;                                //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaGalleryTopBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectionTitleValue;                        //@synthesize selectionTitleValue=_selectionTitleValue - In the implementation block
@property (assign,nonatomic) unsigned long long backButtonStyle;                            //@synthesize backButtonStyle=_backButtonStyle - In the implementation block
@property (assign,nonatomic) BOOL backButtonHidden; 
@property (assign,nonatomic) BOOL selectButtonEnabled; 
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(void)setTopBarTitle:(id)arg1 ;
-(void)_updateBackButton;
-(void)_setSelectButtonTitle:(unsigned long long)arg1 ;
-(void)_selectButtonTap:(id)arg1 ;
-(void)_backButtonTap:(id)arg1 ;
-(unsigned long long)selectionTitleValue;
-(void)setSelectionTitleValue:(unsigned long long)arg1 ;
-(unsigned long long)backButtonStyle;
-(void)setBackButtonStyle:(unsigned long long)arg1 ;
-(BOOL)selectButtonEnabled;
-(void)setSelectButtonEnabled:(BOOL)arg1 ;
-(BOOL)backButtonHidden;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(void)setDelegate:(id<FBMediaGalleryTopBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMediaGalleryTopBarDelegate>)delegate;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBMediaPickerSession *)session;
-(void)setSession:(FBMediaPickerSession *)arg1 ;
@end

