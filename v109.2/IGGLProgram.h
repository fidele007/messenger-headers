/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAGLContext, NSMutableSet, NSDictionary, NSMutableArray;

@interface IGGLProgram : NSObject {

	EAGLContext* _context;
	NSMutableSet* _dirtyUniforms;
	unsigned _program;
	NSDictionary* _attributes;
	NSDictionary* _uniforms;
	NSMutableArray* _deallocBlocks;

}

@property (nonatomic,retain) NSMutableArray * deallocBlocks;                //@synthesize deallocBlocks=_deallocBlocks - In the implementation block
@property (nonatomic,readonly) unsigned program;                            //@synthesize program=_program - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * uniforms;                //@synthesize uniforms=_uniforms - In the implementation block
-(id)initWithContext:(id)arg1 vertexShader:(id)arg2 fragmentShader:(id)arg3 ;
-(int)uniformLocationForName:(id)arg1 ;
-(int)attributeLocationForName:(id)arg1 ;
-(id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 ;
-(void)flushUniforms;
-(void)setValue:(id)arg1 forUniformName:(id)arg2 ;
-(id)parseUniforms;
-(id)parseAttributes;
-(void)setTexture:(id)arg1 forUniformName:(id)arg2 ;
-(NSMutableArray *)deallocBlocks;
-(void)addGLDeallocBlock:(/*^block*/id)arg1 ;
-(void)setDeallocBlocks:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)use;
-(NSDictionary *)attributes;
-(void)validate;
-(NSDictionary *)uniforms;
-(unsigned)program;
@end

