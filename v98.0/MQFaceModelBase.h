/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQSceneObjectModel.h>
#import <Messenger/MQFaceModelBaseExports.h>
#import <Messenger/MSQMaterialReferrerProtocol.h>

@class NSString, MSQModelUndoablePrimitive, MSQModelDocumentContext, NSArray;

@interface MQFaceModelBase : MQSceneObjectModel <MQFaceModelBaseExports, MSQMaterialReferrerProtocol> {

	MSQModelUndoablePrimitive* _indicesTypeProperty;
	MSQModelUndoablePrimitive* _materialIdentifierProperty;
	MSQModelUndoablePrimitive* _faceIdProperty;

}

@property (assign,nonatomic) unsigned long long faceId; 
@property (nonatomic,copy) NSString * indicesType; 
@property (nonatomic,retain) id<MSQMaterialModelProtocol> material; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long undoableState; 
@property (nonatomic,readonly) MSQModelDocumentContext * context; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) long long numChildren; 
@property (nonatomic,copy,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<MQDataModelProtocol> parent; 
@property (nonatomic,retain) id<MQFileControllerProtocol> fileController; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,readonly) id<MQDocumentModelProtocol> documentModel; 
@property (nonatomic,copy) NSString * materialIdentifier; 
-(void)addAttributes:(id)arg1 options:(id)arg2 ;
-(void)parseAttributes:(id)arg1 options:(id)arg2 ;
-(NSString *)materialIdentifier;
-(void)setMaterialIdentifier:(NSString *)arg1 ;
-(NSString *)indicesType;
-(void)setIndicesType:(NSString *)arg1 ;
-(unsigned long long)faceId;
-(void)setFaceId:(unsigned long long)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setMaterial:(id<MSQMaterialModelProtocol>)arg1 ;
-(id<MSQMaterialModelProtocol>)material;
@end

