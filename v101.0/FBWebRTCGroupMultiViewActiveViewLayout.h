/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class FBWebRTCGroupMultiViewLayoutAttributes, NSArray;

@interface FBWebRTCGroupMultiViewActiveViewLayout : UICollectionViewLayout {

	CGSize _thumbnailSize;
	CGSize _stickyThumbnailSize;
	unsigned long long _selfViewPosition;
	UIEdgeInsets _contentInsets;
	FBWebRTCGroupMultiViewLayoutAttributes* _activeViewAttributes;
	NSArray* _thumbnailsAttributes;
	FBWebRTCGroupMultiViewLayoutAttributes* _stickyThumbnailAttributes;

}
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)initWithThumbnailSize:(CGSize)arg1 stickyThumbnailSize:(CGSize)arg2 selfViewPosition:(unsigned long long)arg3 contentInsets:(UIEdgeInsets)arg4 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end
