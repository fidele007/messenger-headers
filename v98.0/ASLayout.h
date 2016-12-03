/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASLayoutable;
#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface ASLayout : NSObject {

	BOOL _dirty;
	BOOL _flattened;
	id<ASLayoutable> _layoutableObject;
	NSArray* _sublayouts;
	CGSize _size;
	CGPoint _position;
	SCD_Struct_AS375 _constrainedSizeRange;

}

@property (assign,getter=isFlattened,nonatomic) BOOL flattened;                       //@synthesize flattened=_flattened - In the implementation block
@property (nonatomic,__weak,readonly) id<ASLayoutable> layoutableObject;              //@synthesize layoutableObject=_layoutableObject - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) CGSize size;                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint position;                                        //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AS375 constrainedSizeRange;                 //@synthesize constrainedSizeRange=_constrainedSizeRange - In the implementation block
@property (nonatomic,readonly) NSArray * sublayouts;                                  //@synthesize sublayouts=_sublayouts - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                               //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
+(id)layoutWithLayoutableObject:(id)arg1 constrainedSizeRange:(SCD_Struct_AS375)arg2 size:(CGSize)arg3 sublayouts:(id)arg4 ;
+(id)layoutWithLayoutableObject:(id)arg1 constrainedSizeRange:(SCD_Struct_AS375)arg2 size:(CGSize)arg3 ;
+(id)layoutWithLayoutableObject:(id)arg1 constrainedSizeRange:(SCD_Struct_AS375)arg2 size:(CGSize)arg3 position:(CGPoint)arg4 sublayouts:(id)arg5 ;
+(id)layoutWithLayout:(id)arg1 position:(CGPoint)arg2 ;
+(id)flattenedLayoutWithLayoutableObject:(id)arg1 constrainedSizeRange:(SCD_Struct_AS375)arg2 size:(CGSize)arg3 sublayouts:(id)arg4 ;
-(SCD_Struct_AS375)constrainedSizeRange;
-(id<ASLayoutable>)layoutableObject;
-(id)filteredNodeLayoutTree;
-(id)initWithLayoutableObject:(id)arg1 constrainedSizeRange:(SCD_Struct_AS375)arg2 size:(CGSize)arg3 position:(CGPoint)arg4 sublayouts:(id)arg5 ;
-(void)setFlattened:(BOOL)arg1 ;
-(BOOL)isFlattened;
-(CGSize)size;
-(id)init;
-(CGRect)frame;
-(unsigned long long)type;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(NSArray *)sublayouts;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)isDirty;
@end
