/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
	double _contentWidth;

}
+(Class)layoutAttributesClass;
-(id)initWithThumbnailSize:(CGSize)arg1 stickyThumbnailSize:(CGSize)arg2 selfViewPosition:(unsigned long long)arg3 contentInsets:(UIEdgeInsets)arg4 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

