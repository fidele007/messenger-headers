/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryFrameSetter <NSObject>
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) BOOL hasCompletedComputation; 
@required
-(id)layoutAttributesForElementWithID:(id)arg1;
-(id)currentElementsWithinFrame:(CGRect)arg1;
-(id)existingLayoutAttributesForElementWithID:(id)arg1;
-(BOOL)hasCompletedComputation;
-(id)elementLayoutForElementID:(id)arg1;
-(CGRect)bounds;
-(id)elementAtPoint:(CGPoint)arg1;

@end
