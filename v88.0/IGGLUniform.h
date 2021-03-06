/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSValue;

@interface IGGLUniform : NSObject {

	int _location;
	int _size;
	unsigned _type;
	int _textureUnit;
	NSValue* _value;
	id _texture;

}

@property (nonatomic,readonly) int location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) int size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSValue * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id texture;                   //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) int textureUnit;              //@synthesize textureUnit=_textureUnit - In the implementation block
-(int)textureUnit;
-(void)setTextureUnit:(int)arg1 ;
-(id)initWithLocation:(int)arg1 size:(int)arg2 type:(unsigned)arg3 ;
-(int)size;
-(void)flush;
-(unsigned)type;
-(NSValue *)value;
-(void)setValue:(NSValue *)arg1 ;
-(int)location;
-(id)texture;
-(void)setTexture:(id)arg1 ;
@end

