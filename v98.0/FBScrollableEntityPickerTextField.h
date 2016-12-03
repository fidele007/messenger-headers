/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIScrollView, FBEntityPickerTextField, NSArray;

@interface FBScrollableEntityPickerTextField : UIView {

	UIScrollView* _searchFieldScroller;
	BOOL _forceBlackEntityTokenText;
	FBEntityPickerTextField* _searchField;
	NSArray* _accessibilityElements;

}

@property (nonatomic,copy) NSArray * accessibilityElements;                        //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,readonly) FBEntityPickerTextField * searchField;              //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic) BOOL forceBlackEntityTokenText;                       //@synthesize forceBlackEntityTokenText=_forceBlackEntityTokenText - In the implementation block
-(void)scrollToTheEnd;
-(void)setForceBlackEntityTokenText:(BOOL)arg1 ;
-(BOOL)forceBlackEntityTokenText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBEntityPickerTextField *)searchField;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(void)updateContentSize;
@end
