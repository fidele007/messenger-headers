/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MQFaceModelBaseExports <JSExport>
@property (assign,nonatomic) unsigned long long faceId; 
@property (nonatomic,copy) NSString * indicesType; 
@property (nonatomic,retain) id<MSQMaterialModelProtocol> material; 
@required
-(NSString *)indicesType;
-(void)setIndicesType:(id)arg1;
-(unsigned long long)faceId;
-(void)setFaceId:(unsigned long long)arg1;
-(void)setMaterial:(id)arg1;
-(id<MSQMaterialModelProtocol>)material;

@end
