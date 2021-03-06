/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <UIKit/UICollectionViewLayout_Warpable.h>

@class LSCollectionViewLayoutHelper, NSString;

@interface DraggableCollectionViewFlowLayout : UICollectionViewFlowLayout <UICollectionViewLayout_Warpable> {

	LSCollectionViewLayoutHelper* _layoutHelper;

}

@property (nonatomic,readonly) LSCollectionViewLayoutHelper * layoutHelper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(LSCollectionViewLayoutHelper *)layoutHelper;
-(BOOL)_collectionViewBoundsAreSameSize:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

