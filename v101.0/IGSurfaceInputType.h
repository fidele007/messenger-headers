/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGSurfaceInputType <NSObject>
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) CGSize size; 
@property (getter=isFlipped,nonatomic,readonly) unsigned char flipped; 
@property (nonatomic,readonly) BOOL isConsumable; 
@required
-(BOOL)isConsumable;
-(CVBufferRef)pixelBuffer;
-(CGSize)size;
-(unsigned char)isFlipped;

@end

