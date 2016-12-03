/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary;

@interface FBLayoutAttributeStore : NSObject <NSCopying> {

	NSMutableArray* _sortedAttributeEntries;
	NSMutableArray* _sortedElements;
	NSMutableDictionary* _attributesByElementID;

}

@property (nonatomic,retain) NSMutableArray * sortedAttributeEntries;                  //@synthesize sortedAttributeEntries=_sortedAttributeEntries - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedElements;                          //@synthesize sortedElements=_sortedElements - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributesByElementID;              //@synthesize attributesByElementID=_attributesByElementID - In the implementation block
-(id)layoutAttributesForElementWithID:(id)arg1 ;
-(void)setSortedAttributeEntries:(NSMutableArray *)arg1 ;
-(void)setSortedElements:(NSMutableArray *)arg1 ;
-(void)setAttributesByElementID:(NSMutableDictionary *)arg1 ;
-(long long)_indexOfEntryForPoint:(CGPoint)arg1 inRange:(NSRange)arg2 ;
-(void)addLayoutAttributes:(id)arg1 forElement:(id)arg2 renderedInView:(BOOL)arg3 ;
-(void)removeAllAttributes;
-(void)removeAttributesForElementWithID:(id)arg1 ;
-(id)elementsWithinFrame:(CGRect)arg1 ;
-(NSMutableArray *)sortedAttributeEntries;
-(NSMutableArray *)sortedElements;
-(NSMutableDictionary *)attributesByElementID;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
