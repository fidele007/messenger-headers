/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@protocol FBMediaCreativeToolGenericFilterViewDelegate;
@class NSMutableArray, UIView;

@interface FBMediaCreativeToolGenericFilterView : UIScrollView {

	NSMutableArray* _buttons;
	NSMutableArray* _labels;
	UIView* _selectionIndicator;
	unsigned long long _selectedIndex;
	id<FBMediaCreativeToolGenericFilterViewDelegate> _filterDelegate;

}

@property (assign,nonatomic) unsigned long long selectedIndex;                                                    //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolGenericFilterViewDelegate> filterDelegate;              //@synthesize filterDelegate=_filterDelegate - In the implementation block
-(id<FBMediaCreativeToolGenericFilterViewDelegate>)filterDelegate;
-(void)setFilterDelegate:(id<FBMediaCreativeToolGenericFilterViewDelegate>)arg1 ;
-(void)_addFilterButtonWithTitle:(id)arg1 ;
-(void)_didSelectButton:(id)arg1 ;
-(id)initWithButtonNames:(id)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
@end
