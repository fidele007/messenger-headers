/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData;


@protocol MQDocumentModelProtocol <MQDataModelProtocol>
@property (nonatomic,copy,readonly) NSString * documentId; 
@property (assign,nonatomic) BOOL isRuntime; 
@property (nonatomic,retain) NSData * previewImageData; 
@property (assign,nonatomic) unsigned long long minimumSupportedNumberOfFaces; 
@property (assign,nonatomic) unsigned long long maximumSupportedNumberOfFaces; 
@property (assign,nonatomic) BOOL hidesSceneWhenNoFaces; 
@property (assign,nonatomic) BOOL smoothSkin; 
@property (nonatomic,copy) NSString * previewImageName; 
@property (nonatomic,readonly) id<MQTexturesModelProtocol> textures; 
@property (nonatomic,readonly) id<MQMaterialsModelProtocol> materials; 
@property (nonatomic,readonly) id<MSQPrefabsModelProtocol> prefabs; 
@property (nonatomic,readonly) id<MQSceneModelProtocol> scene; 
@property (nonatomic,readonly) id<MQScriptModelProtocol> script; 
@property (nonatomic,copy,readonly) NSString * trackerType; 
@property (nonatomic,readonly) long long fileVersion; 
@property (nonatomic,readonly) long long creatorVersion; 
@property (nonatomic,readonly) long long writerVersion; 
@property (nonatomic,readonly) BOOL needsFaceTracker; 
@required
-(void)setIsRuntime:(BOOL)arg1;
-(BOOL)isRuntime;
-(id<MSQPrefabsModelProtocol>)prefabs;
-(unsigned long long)maximumSupportedNumberOfFaces;
-(unsigned long long)minimumSupportedNumberOfFaces;
-(BOOL)smoothSkin;
-(void)setSmoothSkin:(BOOL)arg1;
-(BOOL)hidesSceneWhenNoFaces;
-(BOOL)needsFaceTracker;
-(NSString *)documentId;
-(id)generateDocumentID;
-(BOOL)convertAssetsTo:(id)arg1;
-(id)textureWithIdentifier:(id)arg1;
-(id)materialWithIdentifier:(id)arg1;
-(id)resourceFileNames;
-(void)synchronizeResourcesUsingFileController:(id)arg1;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(id)arg1;
-(void)setMinimumSupportedNumberOfFaces:(unsigned long long)arg1;
-(void)setMaximumSupportedNumberOfFaces:(unsigned long long)arg1;
-(void)setHidesSceneWhenNoFaces:(BOOL)arg1;
-(NSString *)previewImageName;
-(void)setPreviewImageName:(id)arg1;
-(NSString *)trackerType;
-(long long)creatorVersion;
-(long long)writerVersion;
-(id<MQScriptModelProtocol>)script;
-(void)validate;
-(id<MQTexturesModelProtocol>)textures;
-(long long)fileVersion;
-(id<MQSceneModelProtocol>)scene;
-(id<MQMaterialsModelProtocol>)materials;

@end

