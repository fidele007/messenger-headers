/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@interface FBHScrollComponentCollectionViewLayout : UICollectionViewLayout {

	CGSize _contentSize;
	vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *> >* _itemAttributes;

}
-(void)updateLayoutForChildren:(const vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> >*)arg1 spacing:(double)arg2 ;
-(id)description;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
@end

