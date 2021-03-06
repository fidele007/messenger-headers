/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQDataModel.h>
#import <Messenger/MSQSurfaceModelBridgedExports.h>
#import <Messenger/MSQSurfaceModelExports.h>

@class MSQModelUndoablePrimitive, NSString;

@interface MSQSurfaceModel : MQDataModel <MSQSurfaceModelBridgedExports, MSQSurfaceModelExports> {

	MSQModelUndoablePrimitive* _materialIdentifierProperty;

}

@property (nonatomic,copy) NSString * materialIdentifier; 
@property (nonatomic,copy) id<MSQMaterialModelProtocol> material; 
-(void)parseAttributes:(id)arg1 ;
-(NSString *)materialIdentifier;
-(void)setMaterialIdentifier:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)tagName;
-(void)setMaterial:(id<MSQMaterialModelProtocol>)arg1 ;
-(id<MSQMaterialModelProtocol>)material;
-(void)addAttributes:(id)arg1 ;
@end

