/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UISearchBar, FBLazyCreator, UIColor;

@interface MNUniversalSearchBarTitleView : UIView {

	UISearchBar* _searchBar;
	FBLazyCreator* _searchTextFieldCreator;
	FBLazyCreator* _blurViewCreator;
	BOOL _usesBlurBackground;
	UIColor* _placeholderTextColor;

}

@property (assign,nonatomic) BOOL usesBlurBackground;                   //@synthesize usesBlurBackground=_usesBlurBackground - In the implementation block
@property (nonatomic,copy) UIColor * placeholderTextColor;              //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
-(id)initWithSearchBar:(id)arg1 ;
-(void)_cutomizeApperance;
-(void)_updatePlaceholderTextColor;
-(void)setUsesBlurBackground:(BOOL)arg1 ;
-(BOOL)usesBlurBackground;
-(void)layoutSubviews;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
@end

