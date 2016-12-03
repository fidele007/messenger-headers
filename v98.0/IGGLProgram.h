/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 ;
-(void)setValue:(id)arg1 forUniformName:(id)arg2 ;
-(void)flushUniforms;
-(id)parseUniforms;
-(id)parseAttributes;
-(void)setTexture:(id)arg1 forUniformName:(id)arg2 ;
-(NSMutableArray *)deallocBlocks;
-(void)addGLDeallocBlock:(/*^block*/id)arg1 ;
-(int)uniformLocationForName:(id)arg1 ;
-(void)setDeallocBlocks:(NSMutableArray *)arg1 ;
-(id)initWithContext:(id)arg1 vertexShader:(id)arg2 fragmentShader:(id)arg3 ;
-(int)attributeLocationForName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)use;
-(NSDictionary *)attributes;
-(void)validate;
-(NSDictionary *)uniforms;
-(unsigned)program;
@end

