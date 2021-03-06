/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MSQUniformsModel;


@protocol MQDefaultMaterialModelExports <JSExport>
@property (assign,nonatomic) double shininess; 
@property (assign,nonatomic) double fresnelExponent; 
@property (assign,nonatomic) long long transparencyMode; 
@property (assign,nonatomic) long long lightingModel; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,getter=isLitPerPixel,nonatomic) BOOL litPerPixel; 
@property (assign,nonatomic) BOOL locksAmbientWithDiffuse; 
@property (nonatomic,readonly) MSQUniformsModel * uniforms; 
@required
-(void)setLightingModel:(long long)arg1;
-(long long)lightingModel;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1;
-(MSQUniformsModel *)uniforms;
-(void)setFresnelExponent:(double)arg1;
-(double)fresnelExponent;
-(BOOL)isLitPerPixel;
-(void)setLitPerPixel:(BOOL)arg1;
-(BOOL)locksAmbientWithDiffuse;
-(void)setLocksAmbientWithDiffuse:(BOOL)arg1;
-(double)shininess;
-(void)setShininess:(double)arg1;
-(long long)transparencyMode;
-(void)setTransparencyMode:(long long)arg1;

@end

