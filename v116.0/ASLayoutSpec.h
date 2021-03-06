/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASLayoutableAsciiArtProtocol.h>
#import <Messenger/ASLayoutable.h>

@protocol ASLayoutable;
@class NSString;

@interface ASLayoutSpec : NSObject <ASLayoutableAsciiArtProtocol, ASLayoutable> {

	ASEnvironmentState _environmentState;
	RecursiveMutex _propertyLock;
	map<unsigned long, id<ASLayoutable>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, id<ASLayoutable> > > >* _children;
	BOOL _isFinalLayoutable;
	BOOL _isMutable;
	id<ASLayoutable> _parent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isMutable;                                   //@synthesize isMutable=_isMutable - In the implementation block
@property (assign,nonatomic,__weak) id<ASLayoutable> parent;                   //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) double spacingBefore; 
@property (assign,nonatomic) double spacingAfter; 
@property (assign,nonatomic) BOOL flexGrow; 
@property (assign,nonatomic) BOOL flexShrink; 
@property (assign,nonatomic) KeyboardConfiguration flexBasis; 
@property (assign,nonatomic) unsigned long long alignSelf; 
@property (assign,nonatomic) double ascender; 
@property (assign,nonatomic) double descender; 
@property (assign,nonatomic) SCD_Struct_AS757 sizeRange; 
@property (assign,nonatomic) CGPoint layoutPosition; 
@property (assign,nonatomic) BOOL isFinalLayoutable;                           //@synthesize isFinalLayoutable=_isFinalLayoutable - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutableType; 
@property (nonatomic,readonly) BOOL canLayoutAsynchronous; 
+(id)asciiArtStringForChildren:(id)arg1 parentName:(id)arg2 ;
+(id)asciiArtStringForChildren:(id)arg1 parentName:(id)arg2 direction:(unsigned long long)arg3 ;
-(void)setFlexBasis:(KeyboardConfiguration)arg1 ;
-(KeyboardConfiguration)flexBasis;
-(void)setFlexGrow:(BOOL)arg1 ;
-(BOOL)flexGrow;
-(void)setFlexShrink:(BOOL)arg1 ;
-(BOOL)flexShrink;
-(void)setAlignSelf:(unsigned long long)arg1 ;
-(unsigned long long)alignSelf;
-(id)measureWithSizeRange:(CKSizeRange)arg1 ;
-(ASEnvironmentTraitCollection)environmentTraitCollection;
-(void)setIsMutable:(BOOL)arg1 ;
-(void)setSizeRange:(SCD_Struct_AS757)arg1 ;
-(BOOL)supportsUpwardPropagation;
-(void)propagateUpLayoutOptionsState;
-(unsigned long long)layoutableType;
-(BOOL)canLayoutAsynchronous;
-(double)spacingBefore;
-(void)setSpacingBefore:(double)arg1 ;
-(double)spacingAfter;
-(void)setSpacingAfter:(double)arg1 ;
-(void)setAscender:(double)arg1 ;
-(void)setDescender:(double)arg1 ;
-(ASEnvironmentState)environmentState;
-(void)setEnvironmentState:(ASEnvironmentState)arg1 ;
-(BOOL)supportsTraitsCollectionPropagation;
-(id)asyncTraitCollection;
-(void)setEnvironmentTraitCollection:(ASEnvironmentTraitCollection)arg1 ;
-(id)finalLayoutable;
-(BOOL)isFinalLayoutable;
-(void)setIsFinalLayoutable:(BOOL)arg1 ;
-(void)setLayoutOptionExtensionBool:(BOOL)arg1 atIndex:(int)arg2 ;
-(BOOL)layoutOptionExtensionBoolAtIndex:(int)arg1 ;
-(void)setLayoutOptionExtensionInteger:(long long)arg1 atIndex:(int)arg2 ;
-(long long)layoutOptionExtensionIntegerAtIndex:(int)arg1 ;
-(void)setLayoutOptionExtensionEdgeInsets:(UIEdgeInsets)arg1 atIndex:(int)arg2 ;
-(UIEdgeInsets)layoutOptionExtensionEdgeInsetsAtIndex:(int)arg1 ;
-(id)asciiArtName;
-(id)asciiArtString;
-(id)layoutableToAddFromLayoutable:(id)arg1 ;
-(void)propagateUpLayoutable:(id)arg1 ;
-(void)setChild:(id)arg1 ;
-(void)setChild:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)childForIndex:(unsigned long long)arg1 ;
-(id)child;
-(SCD_Struct_AS757)sizeRange;
-(BOOL)isMutable;
-(id)init;
-(double)ascender;
-(double)descender;
-(id)children;
-(id<ASLayoutable>)parent;
-(void)setParent:(id<ASLayoutable>)arg1 ;
-(CGPoint)layoutPosition;
-(void)setLayoutPosition:(CGPoint)arg1 ;
-(void)setChildren:(id)arg1 ;
@end

