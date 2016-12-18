/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <Messenger/MNPaymentsThemePagingInfoProvider.h>

@class NSMutableDictionary, MNPaymentsThemeLayoutConfiguration, NSArray, NSString;

@interface MNPaymentsThemeCollectionViewLayout : UICollectionViewLayout <MNPaymentsThemePagingInfoProvider> {

	NSMutableDictionary* _initialLayoutAttributesBeforeDisappearing;
	MNPaymentsThemeLayoutConfiguration* _layoutConfiguration;
	CGSize _blankPageSize;
	CGSize _pageSize;
	CGSize _layoutContentSize;
	NSArray* _layoutAttributes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_preparePageSize;
-(void)_prepareContentSize;
-(void)_prepareLayoutAttributes;
-(long long)_normalizedPageIndex:(long long)arg1 ;
-(long long)themePageIndexAtContentOffset:(CGPoint)arg1 ;
-(CGPoint)themeContentOffsetAtPageIndex:(long long)arg1 ;
-(CGSize)themePageSizeAtIndex:(long long)arg1 ;
-(id)initWithThemeConfiguration:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
@end
